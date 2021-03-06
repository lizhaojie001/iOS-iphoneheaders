/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUISearchFieldDelegate.h>

@class SKUIClientContext, UIViewController, SKUISearchFieldController, NSString;

@interface SKUIIPadSearchController : NSObject <SKUISearchFieldDelegate> {

	SKUIClientContext* _clientContext;
	UIViewController* _parentViewController;
	SKUISearchFieldController* _searchFieldController;

}

@property (nonatomic,__weak,readonly) UIViewController * parentViewController;                 //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) SKUISearchFieldController * searchFieldController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UIViewController *)parentViewController;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)initWithParentViewController:(id)arg1 ;
-(void)setNumberOfSearchResults:(long long)arg1 ;
-(SKUISearchFieldController *)searchFieldController;
-(id)_searchFieldController;
-(id)newSearchFieldBarItem;
-(void)reloadSearchField;
-(void)_termDidChangeNotification:(id)arg1 ;
-(void)_requestSearch:(id)arg1 ;
-(id)_existingSharedResultsViewController;
-(id)_sharedResultsViewController;
-(void)searchFieldController:(id)arg1 requestSearch:(id)arg2 ;
-(BOOL)searchFieldControllerShouldBeginEditing:(id)arg1 ;
-(void)setSearchFieldPlaceholderText:(id)arg1 ;
-(void)setSearchFieldText:(id)arg1 ;
@end

