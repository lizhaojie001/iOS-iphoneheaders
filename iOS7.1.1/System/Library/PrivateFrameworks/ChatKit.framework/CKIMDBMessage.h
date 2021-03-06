/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKDBMessage.h>

@class NSString;

@interface CKIMDBMessage : CKDBMessage {

	int _personID;
	NSString* _personName;

}

@property (nonatomic,retain) NSString * personName;              //@synthesize personName=_personName - In the implementation block
@property (assign,nonatomic) int personID;                       //@synthesize personID=_personID - In the implementation block
-(id)personName;
-(void)dealloc;
-(void)markAsRead;
-(id)initWithRecordID:(long long)arg1 ;
-(void)resetIMPerson;
-(void)setPersonName:(id)arg1 ;
-(int)personID;
-(void)setPersonID:(int)arg1 ;
@end

