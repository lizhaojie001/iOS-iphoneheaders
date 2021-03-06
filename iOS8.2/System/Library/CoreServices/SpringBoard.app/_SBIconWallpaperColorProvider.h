/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/_UISettingsKeyObserver.h>
#import <SpringBoard/SBWallpaperObserver.h>

@class SBIconColorSettings, NSHashTable, NSString;

@interface _SBIconWallpaperColorProvider : NSObject <_UISettingsKeyObserver, SBWallpaperObserver> {

	SBIconColorSettings* _colorSettings;
	NSHashTable* _clients;
	CGColorRef _blurColor;
	CGColorRef _solidColor;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)wallpaperDidChangeForVariant:(int)arg1 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(int)arg2 ;
-(void)wallpaperGeometryDidChangeForVariant:(int)arg1 ;
-(void)updateColorForClientBoundsChange:(id)arg1 ;
-(void)_updateClient:(id)arg1 ;
-(void)_updateBlurForClient:(id)arg1 ;
-(void)_updateAllClients;
-(void)_updateColors;
-(void)dealloc;
-(id)init;
-(void)addClient:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)removeClient:(id)arg1 ;
@end

