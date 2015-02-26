/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class NSString, ML3MusicLibrary;

@interface ML3SpotlightMatchingNameCache : NSObject {

	unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >* _matchingSet;
	NSString* _matchString;
	BOOL _idle;
	ML3MusicLibrary* _library;

}
+(void)initialize;
+(void)loadFromLibrary:(id)arg1 namesMatchingString:(id)arg2 cancelHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)_initWithLibrary:(id)arg1 matchString:(id)arg2 cancelHandler:(/*^block*/id)arg3 ;
@end
