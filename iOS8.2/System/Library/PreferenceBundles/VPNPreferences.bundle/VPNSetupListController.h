/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VPNPreferences/VPNPreferences-Structs.h>
#import <Preferences/PSListController.h>

@class NSString, PSSpecifier, NSMutableArray, NSArray, UIAlertView;

@interface VPNSetupListController : PSListController {

	int _currentVPNType;
	int _originalVPNType;
	int _encType;
	unsigned _vpnGrade;
	char _dirty;
	char _sendAllTraffic;
	char _useRSASecurID;
	char _usesCertificates;
	char _passwordRequired;
	NSString* _displayName;
	NSString* _server;
	NSString* _account;
	NSString* _password;
	NSString* _secret;
	id _ciscoCertificate;
	PSSpecifier* _serverSpec;
	PSSpecifier* _serverAddressSpec;
	PSSpecifier* _timeSpec;
	NSMutableArray* _timeSpecArray;
	PSSpecifier* _sharedSecretSpec;
	PSSpecifier* _encryptionTypeSpec;
	PSSpecifier* _vpnGradeStaticSpec;
	PSSpecifier* _passwordSpec;
	PSSpecifier* _sendAllTrafficSpec;
	PSSpecifier* _rsaSpec;
	PSSpecifier* _groupNameSpec;
	PSSpecifier* _useCertSwitchSpec;
	PSSpecifier* _certListSpec;
	PSSpecifier* _accountSpec;
	PSSpecifier* _ciscoImageSpec;
	NSArray* _typeTabSpecifiers;
	NSArray* _group1Specifiers;
	PSSpecifier* _proxyLabelSpec;
	NSArray* _proxyGroupSpecifiers;
	NSArray* _pacSpecifiers;
	NSArray* _manualSpecifiers;
	NSArray* _proxyAuthSpecifiers;
	NSString* _serviceID;
	NSString* _groupDisplayName;
	int _proxyType;
	NSString* _proxyServer;
	NSString* _proxyPort;
	char _proxyAuthenticated;
	NSString* _proxyUsername;
	NSString* _proxyPassword;
	NSString* _proxyPacFile;
	PSSpecifier* _displayNameSpec;
	char _userCreated;
	char _typeChanged;
	char _onDemandService;
	char _onDemandEnabled;
	NSString* _sslAppName;
	UIAlertView* _deleteConfirm;
	PSSpecifier* _updateButton;

}
-(void)updateDoneButton;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(char)arg1 ;
-(id)bundle;
-(id)_connection;
-(char)haveEnoughValues;
-(id)proxyUsesAuthentication:(id)arg1 ;
-(id)proxyType:(id)arg1 ;
-(void)setProxyServer:(id)arg1 specifier:(id)arg2 ;
-(id)proxyServer:(id)arg1 ;
-(void)setProxyUsesAuthentication:(id)arg1 specifier:(id)arg2 ;
-(void)setProxyUsername:(id)arg1 specifier:(id)arg2 ;
-(id)proxyUsername:(id)arg1 ;
-(void)setProxyPassword:(id)arg1 specifier:(id)arg2 ;
-(id)proxyPassword:(id)arg1 ;
-(void)setProxyType:(id)arg1 specifier:(id)arg2 ;
-(id)statusForConnection:(id)arg1 ;
-(void)_vpnStatusChanged:(id)arg1 ;
-(void)_timerUpdated:(id)arg1 ;
-(id)serverForConnection:(id)arg1 ;
-(id)usernameForConnection:(id)arg1 ;
-(id)typeForConnection:(id)arg1 ;
-(id)localIPForSpecifier:(id)arg1 ;
-(id)remoteIPForSpecifier:(id)arg1 ;
-(id)timeConnectedForSpecifier:(id)arg1 ;
-(void)saveButtonClicked:(id)arg1 ;
-(void)scrollToSpecifier:(id)arg1 ;
-(void)saveButtonTapped:(id)arg1 ;
-(id)onDemand:(id)arg1 ;
-(id)useRSASecurIDForSpecifier:(id)arg1 ;
-(id)sendAllTraffic:(id)arg1 ;
-(void)_setOriginalVPNType:(int)arg1 ;
-(char)_saveConfigurationSettings;
-(char)deleteConfiguration:(id)arg1 ;
-(void)deleteVPNConfiguration:(id)arg1 ;
-(void)_setCurrentVPNType:(int)arg1 ;
-(void)setUsesCertificates:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setOnDemandService:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setDisplayName:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setUsername:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setServer:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setSharedSecret:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setCiscoCertificate:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setUseRSASecurID:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setSendAllTraffic:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setPPTPEncryptionLevel:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setGroupDisplayName:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setPassword:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setPasswordRequired:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setProxyServerPort:(id)arg1 specifier:(id)arg2 ;
-(void)setPacFile:(id)arg1 specifier:(id)arg2 ;
-(void)setStateForServiceID:(id)arg1 ;
-(id)interfaceTypeForConnection:(id)arg1 ;
-(void)deleteConfirm:(id)arg1 ;
-(void)renewCertificate:(id)arg1 ;
-(id)proxyServerPort:(id)arg1 ;
-(id)pacFile:(id)arg1 ;
-(void)setOnDemand:(id)arg1 forSpecifier:(id)arg2 ;
-(id)pptpEncryptionLevelForSpecifier:(id)arg1 ;
-(void)setVPNGrade:(id)arg1 forSpecifier:(id)arg2 ;
-(id)vpnGradeForSpecifier:(id)arg1 ;
-(id)vpnGradeNameForSpecifier:(id)arg1 ;
-(void)setVPNType:(CFStringRef)arg1 forSpecifier:(id)arg2 ;
-(CFStringRef)vpnTypeForSpecifier:(id)arg1 ;
-(id)usernameForSpecifier:(id)arg1 ;
-(id)displayNameForSpecifier:(id)arg1 ;
-(id)serverForSpecifier:(id)arg1 ;
-(id)passwordForSpecifier:(id)arg1 ;
-(id)sharedSecretForSpecifier:(id)arg1 ;
-(id)ciscoCertificateForSpecifier:(id)arg1 ;
-(id)groupDisplayNameForSpecifier:(id)arg1 ;
-(id)usesCertificatesForSpecifier:(id)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
-(id)specifiers;
@end

