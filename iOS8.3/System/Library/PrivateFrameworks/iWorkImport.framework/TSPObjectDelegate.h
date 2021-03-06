/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:02 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class TSPObjectContext;


@protocol TSPObjectDelegate <TSPObjectModifyDelegate>
@property (nonatomic,readonly) TSPObjectContext * context; 
@required
-(long long)modifyObjectTokenForNewObject;
-(id)newObjectUUIDForObject:(id)arg1;
-(char)canSetObjectUUIDForObject:(id)arg1;
-(id)objectUUIDMap;
-(long long)newObjectIdentifier;
-(char)isObjectInDocument:(id)arg1;
-(TSPObjectContext *)context;

@end

