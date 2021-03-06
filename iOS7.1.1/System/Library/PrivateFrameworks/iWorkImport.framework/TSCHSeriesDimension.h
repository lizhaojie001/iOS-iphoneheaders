/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface TSCHSeriesDimension : NSObject <NSCopying> {

	unsigned long long mSeriesIndex;
	int mAxisType;

}

@property (nonatomic,readonly) unsigned long long seriesIndex; 
@property (nonatomic,readonly) int axisType; 
+(id)seriesDimensionWithSeriesIndex:(unsigned long long)arg1 axisType:(int)arg2 ;
-(id)initWithSeriesIndex:(unsigned long long)arg1 axisType:(int)arg2 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(int)axisType;
-(unsigned long long)seriesIndex;
@end

