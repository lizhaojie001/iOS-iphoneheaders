/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:00:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKChatItem.h>

@class NSAttributedString;

@interface CKMessageStatusChatItem : CKChatItem {

	char _buttonSizeLoaded;
	NSAttributedString* _transcriptButtonText;
	CGSize _buttonSize;
	UIEdgeInsets _buttonTextAlignmentInsets;

}

@property (nonatomic,copy) NSAttributedString * transcriptButtonText;                      //@synthesize transcriptButtonText=_transcriptButtonText - In the implementation block
@property (nonatomic,readonly) CGSize buttonSize;                                          //@synthesize buttonSize=_buttonSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets buttonTextAlignmentInsets;                     //@synthesize buttonTextAlignmentInsets=_buttonTextAlignmentInsets - In the implementation block
@property (nonatomic,readonly) int buttonType; 
@property (assign,getter=isButtonSizeLoaded,nonatomic) char buttonSizeLoaded;              //@synthesize buttonSizeLoaded=_buttonSizeLoaded - In the implementation block
+(id)thePastDateFormatter;
+(id)thisWeekRelativeDateFormatter;
+(id)todayDateFormatter;
-(id)now;
-(CGSize)buttonSize;
-(void)dealloc;
-(unsigned)count;
-(Class)cellClass;
-(id)time;
-(int)buttonType;
-(UIEdgeInsets)contentInsets;
-(id)loadTranscriptText;
-(char)isFromMe;
-(char)transcriptOrientation;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(void)unloadTranscriptText;
-(void)unloadSize;
-(UIEdgeInsets)transcriptTextAlignmentInsets;
-(UIEdgeInsets)buttonTextAlignmentInsets;
-(char)wantsDrawerLayout;
-(int)statusType;
-(int)expireStatusType;
-(id)loadTranscriptButtonText;
-(CGSize)loadButtonSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(NSAttributedString *)transcriptButtonText;
-(void)setTranscriptButtonText:(NSAttributedString *)arg1 ;
-(char)isButtonSizeLoaded;
-(void)setButtonSizeLoaded:(char)arg1 ;
@end

