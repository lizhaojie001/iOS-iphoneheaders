/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:49 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSData, PRSImage, NSURL;


@protocol PRSMapsResult <PRSBaseResult>
@property (nonatomic,retain) NSString * templateName; 
@property (nonatomic,retain) NSString * section_header; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSData * maps_data; 
@property (nonatomic,retain) NSString * maps_data_type; 
@property (nonatomic,retain) NSString * maps_result_type; 
@property (nonatomic,retain) PRSImage * icon; 
@property (nonatomic,retain) NSString * card_title; 
@property (nonatomic,retain) NSString * more; 
@property (nonatomic,retain) NSURL * more_url; 
@optional
-(NSString *)card_title;
-(void)setCard_title:(id)arg1;
-(NSString *)more;
-(void)setMore:(id)arg1;
-(NSURL *)more_url;
-(void)setMore_url:(id)arg1;

@required
-(PRSImage *)icon;
-(void)setTitle:(id)arg1;
-(NSString *)title;
-(void)setIcon:(id)arg1;
-(NSString *)section_header;
-(void)setSection_header:(id)arg1;
-(NSData *)maps_data;
-(void)setMaps_data:(id)arg1;
-(NSString *)maps_data_type;
-(void)setMaps_data_type:(id)arg1;
-(NSString *)maps_result_type;
-(void)setMaps_result_type:(id)arg1;
-(NSString *)templateName;
-(void)setTemplateName:(id)arg1;

@end

