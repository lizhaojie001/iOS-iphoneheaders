/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/Plugins/Mail.assistantBundle/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAEmailSearch.h>
#import <Mail/MSSearchDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSMutableArray, NSObject, NSString;

@interface MFAssistantEmailSearch : SAEmailSearch <MSSearchDelegate> {

	NSMutableArray* _results;
	unsigned _currentResultCount;
	NSObject*<OS_dispatch_semaphore> _searchCompleted;
	unsigned _hadError : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_generateAceResults;
-(id)_perform;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void)_populateResults:(id)arg1 ;
-(void)_searchFinished:(id)arg1 ;
-(id)_generateMSCriterion;
-(id)_validate;
-(BOOL)search:(id)arg1 didFindResults:(id)arg2 ;
-(void)search:(id)arg1 didFinishWithError:(id)arg2 ;
@end
