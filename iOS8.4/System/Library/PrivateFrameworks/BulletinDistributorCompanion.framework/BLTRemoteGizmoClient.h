/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BLTRemoteObject.h>
#import <BulletinDistributorCompanion/BLTGizmoClient.h>

@protocol BLTCompanionServer;
@class NSString;

@interface BLTRemoteGizmoClient : BLTRemoteObject <BLTGizmoClient> {

	id<BLTCompanionServer> _server;

}

@property (assign,nonatomic,__weak) id<BLTCompanionServer> server;              //@synthesize server=_server - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<BLTCompanionServer>)server;
-(void)registerProtobufHandlers;
-(void)handleAcknowledgeActionRequest:(id)arg1 ;
-(void)handleSnoozeActionRequest:(id)arg1 ;
-(void)handleDismissActionRequest:(id)arg1 ;
-(void)handleSupplementaryActionRequest:(id)arg1 ;
-(void)handleDidPlayLightsAndSirensReply:(id)arg1 ;
-(void)handleRemoveBulletinRequest:(id)arg1 ;
-(void)handleHandlePairedDeviceIdentifierRequest:(id)arg1 ;
-(void)addBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2 updateType:(unsigned long long)arg3 withTimeout:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)cancelBulletinWithPublisherMatchID:(id)arg1 universalSectionID:(id)arg2 feed:(unsigned long long)arg3 ;
-(void)removeBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3 ;
-(void)addBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2 updateType:(unsigned long long)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5 ;
-(void)cancelBulletinWithPublisherMatchID:(id)arg1 universalSectionID:(id)arg2 feed:(unsigned long long)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5 ;
-(void)addBulletinSummary:(id)arg1 ;
-(void)handlePairedDeviceIdentifier:(id)arg1 ;
-(void)addBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2 ;
-(void)setServer:(id<BLTCompanionServer>)arg1 ;
@end
