/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:06:09 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Notifications.siriUIBundle/Notifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Notifications/AFSpeakableNamespaceProvider.h>
#import <Notifications/SiriUISnippetPlugin.h>

@class SANotificationObject, NSString, AFBulletin;

@interface ACNotificationsFormatProvider : NSObject <AFSpeakableNamespaceProvider, SiriUISnippetPlugin> {

	SANotificationObject* _notification;
	NSString* _notificationIdentifier;
	AFBulletin* _assistantBulletin;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)identifier;
-(id)stringForExpression:(id)arg1 ;
-(id)initWithAceObject:(id)arg1 ;
-(void)setAssistantBulletin:(id)arg1 ;
-(id)speakableNamespaceProviderForAceObject:(id)arg1 ;
@end

