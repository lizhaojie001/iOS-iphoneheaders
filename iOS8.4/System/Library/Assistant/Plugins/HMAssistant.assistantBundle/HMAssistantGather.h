/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:52 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/Plugins/HMAssistant.assistantBundle/HMAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HMAssistant/HMHomeManagerDelegate.h>

@class HMHomeManager, NSString;

@interface HMAssistantGather : NSObject <HMHomeManagerDelegate> {

	BOOL _fetchComplete;
	HMHomeManager* _manager;
	/*^block*/id _completionHandler;

}

@property (retain) HMHomeManager * manager;                         //@synthesize manager=_manager - In the implementation block
@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL fetchComplete;                    //@synthesize fetchComplete=_fetchComplete - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)getPrimaryHomeName;
-(void)setFetchComplete:(BOOL)arg1 ;
-(id)getPrimaryHomeID;
-(void)addToList:(id)arg1 service:(id)arg2 ;
-(BOOL)fetchComplete;
-(void)addToList:(id)arg1 room:(id)arg2 ;
-(id)gatherHomeKitObjects;
-(void)addToList:(id)arg1 objectWithName:(id)arg2 type:(id)arg3 home:(id)arg4 andIdentifer:(id)arg5 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(HMHomeManager *)manager;
-(void)setManager:(HMHomeManager *)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
@end

