/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFModernAtomView.h>

@protocol MFComposeRecipientAtomDelegate;
@class MFComposeRecipient, UITextInputTraits;

@interface MFModernComposeRecipientAtom : MFModernAtomView {

	id<MFComposeRecipientAtomDelegate> _delegate;
	MFComposeRecipient* _recipient;
	UITextInputTraits* _traits;
	unsigned _wasSelectedWhenTouchesBegan : 1;
	unsigned _touchesWereCancelled : 1;

}

@property (nonatomic,readonly) MFComposeRecipient * recipient; 
@property (assign,nonatomic) id<MFComposeRecipientAtomDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 recipient:(id)arg2 presentationOptions:(unsigned long long)arg3 ;
-(void)handleTouchAndHold;
-(id)initWithFrame:(CGRect)arg1 recipient:(id)arg2 ;
-(MFComposeRecipient *)recipient;
-(void)dealloc;
-(void)setDelegate:(id<MFComposeRecipientAtomDelegate>)arg1 ;
-(id<MFComposeRecipientAtomDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)keyCommands;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
@end

