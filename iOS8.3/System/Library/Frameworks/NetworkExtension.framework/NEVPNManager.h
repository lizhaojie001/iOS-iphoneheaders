/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:02:21 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NEVPNConnection, NEConfiguration, NEConfigurationManager, NSArray, NSString, NEVPNProtocol;

@interface NEVPNManager : NSObject {

	char _hasLoaded;
	NEVPNConnection* _connection;
	NEConfiguration* _configuration;
	NEConfigurationManager* _configurationManager;

}

@property (copy) NSArray * onDemandRules; 
@property (getter=isOnDemandEnabled) char onDemandEnabled; 
@property (copy) NSString * localizedDescription; 
@property (retain) NEVPNProtocol * protocol; 
@property (readonly) NEVPNConnection * connection;                               //@synthesize connection=_connection - In the implementation block
@property (getter=isEnabled) char enabled; 
@property (copy) NEConfiguration * configuration;                                //@synthesize configuration=_configuration - In the implementation block
@property (assign) char hasLoaded;                                               //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (readonly) NEConfigurationManager * configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
+(id)sharedManager;
-(char)isOnDemandEnabled;
-(NSArray *)onDemandRules;
-(void)setOnDemandEnabled:(char)arg1 ;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(NEConfigurationManager *)configurationManager;
-(void)setHasLoaded:(char)arg1 ;
-(void)removeFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveToPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initVPNManager;
-(void)setOnDemandRules:(NSArray *)arg1 ;
-(id)init;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
-(NSString *)localizedDescription;
-(NEVPNConnection *)connection;
-(NEVPNProtocol *)protocol;
-(NEConfiguration *)configuration;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setProtocol:(NEVPNProtocol *)arg1 ;
-(char)hasLoaded;
@end

