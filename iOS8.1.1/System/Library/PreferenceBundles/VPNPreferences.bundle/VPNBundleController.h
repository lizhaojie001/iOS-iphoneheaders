/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:11 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VPNPreferences/VPNPreferences-Structs.h>
#import <Preferences/PSBundleController.h>
#import <VPNPreferences/VPNPasswordDelegate.h>
#import <VPNPreferences/RadiosPreferencesDelegate.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, PSSpecifier, PSConfirmationSpecifier, VPNConnectionStore, NSNumber, NSString;

@interface VPNBundleController : PSBundleController <VPNPasswordDelegate, RadiosPreferencesDelegate, UIApplicationDelegate> {

	PSSpecifier* _passwordSetupSpecifier;
	PSSpecifier* _vpnSpecifier;
	PSConfirmationSpecifier* _toggleVPNSpecifier;
	PSSpecifier* _linkVPNSpecifier;
	VPNConnectionStore* _store;
	BOOL _useNEVPN;
	BOOL _isToggleSwitchInRootMenu;
	BOOL _isRootMenuItem;
	BOOL _networkSpinnerVisible;
	NSNumber* _serviceCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)dealloc;
-(id)vpnActiveForSpecifier:(id)arg1 ;
-(void)_vpnStatusChanged:(id)arg1 ;
-(void)_vpnConfigurationChanged:(id)arg1 ;
-(void)setVPNActive:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_setVPNActive:(BOOL)arg1 ;
-(void)confirmAirplaneModeDisable:(id)arg1 ;
-(void)cancelAirplaneModeDisable:(id)arg1 ;
-(void)activateVPN:(id)arg1 ;
-(void)freeSC;
-(long long)getStatusAndUpdateNetworkSpinnerVisibility;
-(void)_showPasswordDialog;
-(BOOL)_vpnNetworkingIsDisabled;
-(void)applicationResigned:(id)arg1 ;
-(void)initSC;
-(BOOL)_lastConnectionAttemptFailedForServiceId:(id)arg1 ;
-(void)_updateVPNSwitchStatus;
-(void)passwordController:(id)arg1 enteredPassword:(id)arg2 ;
-(void)passwordControllerCancelled:(id)arg1 ;
-(id)statusForSpecifier:(id)arg1 ;
-(void)airplaneModeChanged;
-(void)unload;
-(void)applicationResumed:(id)arg1 ;
-(id)specifiersWithSpecifier:(id)arg1 ;
-(id)initWithParentListController:(id)arg1 ;
@end

