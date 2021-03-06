/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptButtonNativeObject.h>

@interface SUScriptNativeUIBarButtonItem : SUScriptButtonNativeObject {

	BOOL _isBackButton;

}
+(id)objectWithDefaultButtonForScriptButton:(id)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)isShowingConfirmation;
-(void)setImage:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)image;
-(void)setTag:(int)arg1 ;
-(int)tag;
-(id)title;
-(id)styleString;
-(BOOL)isLoading;
-(int)buttonType;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)imageInsets;
-(void)destroyNativeObject;
-(void)setupNativeObject;
-(BOOL)isBackButton;
-(void)hideConfirmationAnimated:(BOOL)arg1 ;
-(void)disconnectButtonAction;
-(void)connectButtonAction;
-(void)setStyleFromString:(id)arg1 ;
-(void)showConfirmationWithTitle:(id)arg1 animated:(BOOL)arg2 ;
-(id)systemItemString;
@end

