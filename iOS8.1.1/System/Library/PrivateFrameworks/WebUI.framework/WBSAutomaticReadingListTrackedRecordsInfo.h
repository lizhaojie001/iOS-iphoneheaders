/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WBSAutomaticReadingListRecordRange, NSArray;

@interface WBSAutomaticReadingListTrackedRecordsInfo : NSObject {

	WBSAutomaticReadingListRecordRange* _rangeOfTrackedRecords;
	NSArray* _items;

}

@property (nonatomic,copy) WBSAutomaticReadingListRecordRange * rangeOfTrackedRecords;              //@synthesize rangeOfTrackedRecords=_rangeOfTrackedRecords - In the implementation block
@property (nonatomic,copy) NSArray * items;                                                         //@synthesize items=_items - In the implementation block
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(WBSAutomaticReadingListRecordRange *)rangeOfTrackedRecords;
-(void)setRangeOfTrackedRecords:(WBSAutomaticReadingListRecordRange *)arg1 ;
@end

