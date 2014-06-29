/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSArray;

@interface ADClientGlobalState : NSObject {

	BOOL _carKitConnected;
	NSString* _audioSessionPortType;
	NSObject<OS_dispatch_queue>* _instanceQueue;

}

@property (nonatomic,readonly) NSArray * globalContextTags; 
@property (nonatomic,copy) NSString * audioSessionPortType;                            //@synthesize audioSessionPortType=_audioSessionPortType - In the implementation block
@property (assign,nonatomic) BOOL carKitConnected;                                     //@synthesize carKitConnected=_carKitConnected - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_queue> * instanceQueue;              //@synthesize instanceQueue=_instanceQueue - In the implementation block
+(id)sharedInstance;
-(id)instanceQueue;
-(id)globalContextTags;
-(void)setInstanceQueue:(id)arg1 ;
-(void)_audioRouteChanged:(id)arg1 ;
-(void)_checkForCarKitScreen;
-(void)_checkForNewAudioRoute;
-(id)audioSessionPortType;
-(BOOL)carKitConnected;
-(void)setCarKitConnected:(BOOL)arg1 ;
-(void)_notifyObserversOfStateChange;
-(void)setAudioSessionPortType:(id)arg1 ;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
