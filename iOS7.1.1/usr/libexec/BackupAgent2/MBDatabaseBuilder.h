/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:27 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MBEncoder, MBDatabaseIndex, MBAggregateDictionary;

@interface MBDatabaseBuilder : NSObject {

	MBEncoder* _encoder;
	MBDatabaseIndex* _index;
	MBAggregateDictionary* _aggregateDictionary;
	unsigned _offsetBase;

}

@property (nonatomic,readonly) MBEncoder * encoder;                                      //@synthesize encoder=_encoder - In the implementation block
@property (nonatomic,readonly) MBDatabaseIndex * index;                                  //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) MBAggregateDictionary * aggregateDictionary;              //@synthesize aggregateDictionary=_aggregateDictionary - In the implementation block
+(id)databaseBuilderWithEncoder:(id)arg1 ;
-(void)addPlaceholderForFile:(id)arg1 flags:(unsigned)arg2 ;
-(void)addFile:(id)arg1 flags:(unsigned)arg2 ;
-(id)initWithEncoder:(id)arg1 ;
-(id)encoder;
-(id)aggregateDictionary;
-(void)dealloc;
-(id)index;
-(void)close;
@end

