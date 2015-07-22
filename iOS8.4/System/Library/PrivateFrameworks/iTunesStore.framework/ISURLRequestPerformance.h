/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURLResponse;

@interface ISURLRequestPerformance : NSObject {

	double _finishTime;
	double _receivedResponseTime;
	double _renderBeginTime;
	double _renderEndTime;
	double _startTime;
	NSURLResponse* _urlResponse;

}

@property (assign,nonatomic) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSURLResponse * URLResponse;                      //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,readonly) double finishInterval; 
@property (nonatomic,readonly) double receivedResponseInterval; 
@property (nonatomic,readonly) double renderBeginInterval; 
@property (nonatomic,readonly) double renderEndInterval; 
-(NSURLResponse *)URLResponse;
-(void)dealloc;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(void)setURLResponse:(NSURLResponse *)arg1 ;
-(void)setFinishTime:(double)arg1 ;
-(void)setReceivedResponseTime:(double)arg1 ;
-(void)setRenderFinishTime:(double)arg1 ;
-(double)renderEndInterval;
-(void)setRenderBeginTime:(double)arg1 ;
-(double)finishInterval;
-(double)receivedResponseInterval;
-(double)renderBeginInterval;
@end
