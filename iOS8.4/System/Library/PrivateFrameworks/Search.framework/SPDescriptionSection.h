/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/SPSection.h>
#import <Search/PRSDescriptionSection.h>

@class NSString, PRSImage, NSURL;

@interface SPDescriptionSection : SPSection <PRSDescriptionSection>

@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSURL * attribution_url; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) BOOL title_nowrap; 
@property (assign,nonatomic) long long title_weight; 
@property (nonatomic,retain) NSString * resultDescription; 
@property (assign,nonatomic) long long description_maxlines; 
@property (assign,nonatomic) BOOL description_expand; 
@property (nonatomic,retain) NSString * description_expand_text; 
@property (assign,nonatomic) long long description_size; 
@property (assign,nonatomic) long long description_weight; 
@property (nonatomic,retain) PRSImage * image; 
@property (nonatomic,retain) NSString * image_align; 
@end

