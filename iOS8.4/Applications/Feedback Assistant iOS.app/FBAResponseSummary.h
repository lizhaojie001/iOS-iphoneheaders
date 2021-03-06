/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class FBAFormResponse, NSMutableArray;

@interface FBAResponseSummary : NSObject {

	FBAFormResponse* _formResponse;
	NSMutableArray* _simpleGroups;

}

@property (nonatomic,retain) FBAFormResponse * formResponse;              //@synthesize formResponse=_formResponse - In the implementation block
@property (retain) NSMutableArray * simpleGroups;                         //@synthesize simpleGroups=_simpleGroups - In the implementation block
-(FBAFormResponse *)formResponse;
-(void)setFormResponse:(FBAFormResponse *)arg1 ;
-(void)updateWithFormResponse:(id)arg1 ;
-(id)simpleGroupInSection:(unsigned)arg1 ;
-(void)setSimpleGroups:(NSMutableArray *)arg1 ;
-(NSMutableArray *)simpleGroups;
-(id)init;
-(id)description;
-(int)sectionCount;
@end

