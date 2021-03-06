/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:21 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDAnchor.h>

@interface EDOneCellAnchor : EDAnchor {

	EDCellAnchorMarker mFrom;
	CGSize mSize;
	char mIsRelative;

}
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setFrom:(EDCellAnchorMarker)arg1 ;
-(EDCellAnchorMarker)from;
-(char)isRelative;
-(void)setRelative:(char)arg1 ;
@end

