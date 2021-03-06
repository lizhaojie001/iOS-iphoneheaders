/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:49:06 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class WiFiNetwork;

@interface CheckableTableCell : PSTableCell {

	WiFiNetwork* _network;

}

@property (nonatomic,retain) WiFiNetwork * network;              //@synthesize network=_network - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setChecked:(char)arg1 ;
-(void)setNetwork:(WiFiNetwork *)arg1 ;
-(WiFiNetwork *)network;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
@end

