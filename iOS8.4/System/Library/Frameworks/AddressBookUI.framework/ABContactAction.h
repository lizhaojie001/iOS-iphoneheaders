/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:10 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABContactActionDelegate;
@class CNContact, NSString, UIColor, CNContactStyle;

@interface ABContactAction : NSObject {

	BOOL _destructive;
	id<ABContactActionDelegate> _delegate;
	CNContact* _contact;
	NSString* _title;
	id _target;
	SEL _selector;
	UIColor* _color;
	long long _transportType;
	CNContactStyle* _contactStyle;

}

@property (assign,nonatomic) id<ABContactActionDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,retain,readonly) id target;                                 //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;                                     //@synthesize selector=_selector - In the implementation block
@property (assign,getter=isDestructive,nonatomic) BOOL destructive;              //@synthesize destructive=_destructive - In the implementation block
@property (nonatomic,retain) UIColor * color;                                    //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long transportType;                            //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) CNContactStyle * contactStyle;                      //@synthesize contactStyle=_contactStyle - In the implementation block
+(id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4 ;
+(id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(id)initWithContact:(id)arg1 ;
-(void)performActionWithSender:(id)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)initWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4 ;
-(void)setContactStyle:(CNContactStyle *)arg1 ;
-(CNContactStyle *)contactStyle;
-(void)dealloc;
-(void)setDelegate:(id<ABContactActionDelegate>)arg1 ;
-(id)description;
-(id<ABContactActionDelegate>)delegate;
-(NSString *)title;
-(id)target;
-(SEL)selector;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(BOOL)isDestructive;
-(void)setDestructive:(BOOL)arg1 ;
-(void)setTransportType:(long long)arg1 ;
-(long long)transportType;
@end
