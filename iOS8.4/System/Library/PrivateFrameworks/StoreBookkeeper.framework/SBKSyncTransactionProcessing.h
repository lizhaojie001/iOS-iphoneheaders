/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBKSyncTransactionProcessing <NSObject>
@optional
-(id)transaction:(id)arg1 syncAnchorForTransactionSyncAnchor:(id)arg2;
-(id)transaction:(id)arg1 keysForTransactionForTransactionKeysToUpdate:(id)arg2;
-(id)transaction:(id)arg1 keysForTransactionForTransactionKeysToDelete:(id)arg2;
-(long long)transaction:(id)arg1 conflictDetectionTypeForTransactionDetectionType:(long long)arg2;
-(id)transaction:(id)arg1 conflictDetectionOrdinalForKey:(id)arg2;

@required
-(void)transaction:(id)arg1 willProcessResponseData:(id)arg2;
-(void)transaction:(id)arg1 didProcessResponseData:(id)arg2;
-(void)transaction:(id)arg1 processUpdatedKey:(id)arg2 data:(id)arg3 conflict:(BOOL)arg4 isDirty:(BOOL*)arg5;
-(void)transaction:(id)arg1 processDeletedKey:(id)arg2 isDirty:(BOOL*)arg3;
-(id)transaction:(id)arg1 keyValuePairForUpdatedKey:(id)arg2;

@end
