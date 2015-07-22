/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDAnnotationHosting.h>

@class NSString, TSWPChange, TSKAnnotationAuthor, NSDate, TSDCommentStorage;

@interface TSWPChangeDetails : NSObject <TSDAnnotationHosting> {

	NSString* mChangeTrackingContentString;
	NSString* mChangeTrackingTitleString;
	TSWPChange* _change;

}

@property (nonatomic,retain) TSWPChange * change;                                         //@synthesize change=_change - In the implementation block
@property (nonatomic,readonly) NSString * changeTrackingContentString; 
@property (nonatomic,readonly) NSString * changeTrackingTitleString; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int annotationType; 
@property (nonatomic,readonly) TSKAnnotationAuthor * author; 
@property (nonatomic,readonly) int annotationDisplayStringType; 
@property (nonatomic,readonly) NSDate * date; 
@property (assign,nonatomic) id<TSKModel> hostingModel; 
@property (nonatomic,readonly) NSString * changeTrackingContentFormatString; 
@property (nonatomic,copy) TSDCommentStorage * storage; 
-(void)commitText:(id)arg1 ;
-(id<TSKModel>)hostingModel;
-(void)setHostingModel:(id<TSKModel>)arg1 ;
-(NSString *)changeTrackingContentString;
-(int)annotationDisplayStringType;
-(void)p_updateChangeStrings;
-(char)isEqualToChangeDetails:(id)arg1 ;
-(NSString *)changeTrackingTitleString;
-(NSString *)changeTrackingContentFormatString;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSWPChange *)change;
-(void)setChange:(TSWPChange *)arg1 ;
-(id)initWithChange:(id)arg1 ;
-(void)setAuthor:(TSKAnnotationAuthor *)arg1 ;
-(TSKAnnotationAuthor *)author;
-(int)annotationType;
@end
