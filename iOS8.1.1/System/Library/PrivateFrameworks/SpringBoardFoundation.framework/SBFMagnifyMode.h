/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:54 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/NSCopying.h>

@class NSString;

@interface SBFMagnifyMode : NSObject <NSCopying> {

	float _zoomFactor;
	NSString* _name;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                   //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * name;               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) float zoomFactor;              //@synthesize zoomFactor=_zoomFactor - In the implementation block
+(id)currentMagnifyMode;
+(id)magnifyModeWithSize:(CGSize)arg1 name:(id)arg2 ;
-(void)setZoomFactor:(float)arg1 ;
-(float)zoomFactor;
-(void)dealloc;
-(CGSize)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setSize:(CGSize)arg1 ;
@end
