/*
 
 CEEditorWrapper+Editor.h
 
 CotEditor
 http://coteditor.com
 
 Created by 1024jp on 2016-06-07.
 
 ------------------------------------------------------------------------------
 
 © 2004-2007 nakamuxu
 © 2014-2016 1024jp
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 
 */

#import "CEEditorWrapper.h"


@interface CEEditorWrapper (TextEditing)

// text processing
- (nonnull NSString *)string;  // LF fix
- (nonnull NSString *)substringWithRange:(NSRange)range;  // LF fix
- (nonnull NSString *)substringWithSelection;  // LF fix

- (void)insertTextViewString:(nonnull NSString *)inString;
- (void)insertTextViewStringAfterSelection:(nonnull NSString *)string;
- (void)replaceTextViewAllStringWithString:(nonnull NSString *)string;
- (void)appendTextViewString:(nonnull NSString *)string;

- (NSRange)selectedRange;  // line ending applied
- (void)setSelectedRange:(NSRange)charRange;  // line ending applied

@end




#pragma mark -

@interface CEEditorWrapper (Locating)

- (NSRange)rangeWithLocation:(NSInteger)location length:(NSInteger)length;  // line ending applied
- (void)setSelectedCharacterRangeWithLocation:(NSInteger)location length:(NSInteger)length;  // line ending applied
- (void)setSelectedLineRangeWithLocation:(NSInteger)location length:(NSInteger)length;  // line ending applied

@end
