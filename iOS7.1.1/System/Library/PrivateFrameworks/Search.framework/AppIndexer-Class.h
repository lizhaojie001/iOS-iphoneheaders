/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:52:58 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/AppIndexer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSBundle;

@interface AppIndexer : NSObject {

	NSString* _displayID;
	NSString* _category;
	NSString* _appSpotlightPath;
	NSString* _searchBundleName;
	NSBundle* _bundle;

}
-(id)_loadBundle;
-(id)_getUpdateIDsFromDatastore:(id)arg1 ;
-(id)initWithDisplayID:(id)arg1 andCategory:(id)arg2 ;
-(void)beginIndexing;
-(void)dealloc;
@end

