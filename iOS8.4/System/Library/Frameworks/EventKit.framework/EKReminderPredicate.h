/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPredicate.h>

@class NSString, NSDate;

@interface EKReminderPredicate : EKPredicate {

	BOOL _limitToCompletedOrIncomplete;
	BOOL _completed;
	BOOL _useCompletionDateAsAlternate;
	BOOL _useDueDateAsCompletionDate;
	int _sortOrder;
	NSString* _title;
	NSString* _listTitle;
	NSDate* _dueAfter;
	NSDate* _dueBefore;
	NSString* _searchTerm;
	unsigned long long _maxResults;

}

@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * listTitle;                           //@synthesize listTitle=_listTitle - In the implementation block
@property (assign,nonatomic) BOOL limitToCompletedOrIncomplete;              //@synthesize limitToCompletedOrIncomplete=_limitToCompletedOrIncomplete - In the implementation block
@property (assign,nonatomic) BOOL completed;                                 //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSDate * dueAfter;                              //@synthesize dueAfter=_dueAfter - In the implementation block
@property (nonatomic,retain) NSDate * dueBefore;                             //@synthesize dueBefore=_dueBefore - In the implementation block
@property (assign,nonatomic) BOOL useCompletionDateAsAlternate;              //@synthesize useCompletionDateAsAlternate=_useCompletionDateAsAlternate - In the implementation block
@property (assign,nonatomic) BOOL useDueDateAsCompletionDate;                //@synthesize useDueDateAsCompletionDate=_useDueDateAsCompletionDate - In the implementation block
@property (nonatomic,retain) NSString * searchTerm;                          //@synthesize searchTerm=_searchTerm - In the implementation block
@property (assign,nonatomic) int sortOrder;                                  //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) unsigned long long maxResults;                  //@synthesize maxResults=_maxResults - In the implementation block
+(id)predicateWithCalendars:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)completed;
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(void)setUseDueDateAsCompletionDate:(BOOL)arg1 ;
-(void)setLimitToCompletedOrIncomplete:(BOOL)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setDueAfter:(NSDate *)arg1 ;
-(void)setDueBefore:(NSDate *)arg1 ;
-(void)setUseCompletionDateAsAlternate:(BOOL)arg1 ;
-(void)setListTitle:(NSString *)arg1 ;
-(id)initWithCalendars:(id)arg1 ;
-(NSString *)listTitle;
-(BOOL)limitToCompletedOrIncomplete;
-(NSDate *)dueAfter;
-(NSDate *)dueBefore;
-(BOOL)useCompletionDateAsAlternate;
-(BOOL)useDueDateAsCompletionDate;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSortOrder:(int)arg1 ;
-(int)sortOrder;
-(unsigned long long)maxResults;
-(void)setMaxResults:(unsigned long long)arg1 ;
@end
