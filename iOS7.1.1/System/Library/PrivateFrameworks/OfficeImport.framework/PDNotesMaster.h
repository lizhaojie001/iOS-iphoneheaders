/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/PDSlideBase.h>

@class OADTheme, OADColorMap, OADTextListStyle;

@interface PDNotesMaster : PDSlideBase {

	OADTheme* mTheme;
	OADColorMap* mColorMap;
	OADTextListStyle* mNotesTextStyle;

}
-(void)dealloc;
-(id)init;
-(id)theme;
-(id)colorScheme;
-(id)styleMatrix;
-(id)colorMap;
-(id)fontScheme;
-(id)parentSlideBase;
-(void)doneWithContent;
-(id)drawingTheme;
-(id)notesTextStyle;
-(id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 ;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3 ;
-(id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(bool)arg4 ;
-(id)parentTextStyleForTables;
-(id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3 ;
-(id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3 ;
@end

