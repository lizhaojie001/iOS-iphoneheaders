/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKQuery, CKQueryCursor, NSSet, CKRecordZoneID;

@interface CKDQueryOperation : CKDDatabaseOperation {

	BOOL _shouldFetchAssetContent;
	CKQuery* _query;
	CKQueryCursor* _cursor;
	unsigned long long _resultsLimit;
	CKQueryCursor* _resultsCursor;
	/*^block*/id _recordFetchedBlock;
	NSSet* _desiredKeySet;
	CKRecordZoneID* _zoneID;

}

@property (nonatomic,readonly) CKQuery * query;                              //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) CKQueryCursor * cursor;                       //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,readonly) unsigned long long resultsLimit;              //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,retain) CKQueryCursor * resultsCursor;                  //@synthesize resultsCursor=_resultsCursor - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                            //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,retain) NSSet * desiredKeySet;                          //@synthesize desiredKeySet=_desiredKeySet - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                   //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneID;                        //@synthesize zoneID=_zoneID - In the implementation block
-(CKQuery *)query;
-(CKQueryCursor *)cursor;
-(void)main;
-(CKRecordZoneID *)zoneID;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
-(id)recordFetchedBlock;
-(unsigned long long)resultsLimit;
-(BOOL)shouldFetchAssetContent;
-(CKQueryCursor *)resultsCursor;
-(void)setResultsCursor:(CKQueryCursor *)arg1 ;
-(NSSet *)desiredKeySet;
-(void)_handleQueryRequestFinished:(id)arg1 ;
-(void)setDesiredKeySet:(NSSet *)arg1 ;
@end

