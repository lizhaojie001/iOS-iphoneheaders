/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface BWZoomDelayBuffer : NSObject {

	SCD_Struct_BW42* _zoomRequestBuffer;
	unsigned _zoomRequestBufferIndex;
	unsigned _maxZoomDelay;
	unsigned _currentZoomDelay;
	int _currentZoomDirection;
	int _operatingMode;

}

@property (nonatomic,readonly) unsigned zoomDelay;              //@synthesize currentZoomDelay=_currentZoomDelay - In the implementation block
@property (assign,nonatomic) int operatingMode;                 //@synthesize operatingMode=_operatingMode - In the implementation block
-(void)dealloc;
-(unsigned)zoomDelay;
-(id)initWithMaxZoomDelay:(unsigned)arg1 ;
-(void)updateZoomDelay:(unsigned)arg1 ;
-(void)addZoomRequest:(SCD_Struct_BW42)arg1 ;
-(SCD_Struct_BW42)zoomRequestForISPAppliedZoomFactor:(float)arg1 ;
-(void)setOperatingMode:(int)arg1 ;
-(int)operatingMode;
@end

