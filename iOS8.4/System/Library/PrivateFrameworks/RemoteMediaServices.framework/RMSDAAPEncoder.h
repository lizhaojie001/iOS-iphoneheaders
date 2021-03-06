/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableData, NSData;

@interface RMSDAAPEncoder : NSObject {

	NSMutableData* _data;

}

@property (nonatomic,readonly) NSData * data;              //@synthesize data=_data - In the implementation block
-(id)init;
-(NSData *)data;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forCode:(unsigned)arg3 ;
-(void)encodeInt32:(int)arg1 forCode:(unsigned)arg2 ;
-(void)encodeInt64:(long long)arg1 forCode:(unsigned)arg2 ;
-(void)encodeString:(id)arg1 forCode:(unsigned)arg2 ;
-(void)encodeData:(id)arg1 forCode:(unsigned)arg2 ;
@end

