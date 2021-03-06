/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PowerlogPlugins/PLAudioLogger.bundle/PLAudioLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLoggerSupport/PLLogger.h>

@class AVSystemController, PLEntry, NSString, NSNumber;

@interface PLAudioLogger : PLLogger {

	AVSystemController* avSystemController;
	PLEntry* _lastEntry;

}

@property (nonatomic,readonly) bool headphonesConnected; 
@property (nonatomic,readonly) bool headsetHasInput; 
@property (nonatomic,readonly) NSString * activeRoute; 
@property (nonatomic,readonly) bool muted; 
@property (nonatomic,readonly) NSString * outputCategory; 
@property (nonatomic,readonly) NSNumber * volume; 
@property (nonatomic,readonly) bool active; 
@property (retain) PLEntry * lastEntry;                                //@synthesize lastEntry=_lastEntry - In the implementation block
-(bool)muted;
-(void)dealloc;
-(id)init;
-(bool)active;
-(void)log;
-(void)setupAVSystemController;
-(id)returnVolumeOrOutPutCategory:(int)arg1 ;
-(id)activeRoute;
-(id)outputCategory;
-(bool)headphonesConnected;
-(bool)headsetHasInput;
-(id)lastEntry;
-(void)setLastEntry:(id)arg1 ;
-(id)volume;
@end

