/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, NSMutableArray;

@interface TCMessageEntry : NSObject {

	unsigned m_timeStamp;
	int m_tag;
	NSString* m_text;
	NSArray* m_parameters;
	NSMutableArray* m_affectedObjects;
	int m_count;

}

@property (assign,nonatomic) unsigned timeStamp; 
+(void)initialize;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)timeStamp;
-(void)setTimeStamp:(unsigned)arg1 ;
-(id)getMessageText;
-(void)mergeEntries:(id)arg1 ;
-(id)initWithTag:(int)arg1 affectedObject:(id)arg2 text:(id)arg3 parameters:(void*)arg4 ;
-(void)addAffectedObject:(id)arg1 ;
-(int)timeStampCompare:(id)arg1 ;
-(int)getMessageTag;
-(int)getCount;
-(id)affectedObjects;
-(unsigned)getParameterCount;
-(id)getParameter:(unsigned)arg1 ;
-(void)logWithCat:(id)arg1 ;
@end

