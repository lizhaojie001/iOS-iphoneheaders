/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface TSWPImageBulletProvider : NSObject {

	NSMutableArray* _images;
	NSMutableArray* _filenames;

}

@property (nonatomic,readonly) NSArray * predefinedImages; 
+(id)sharedInstance;
-(id)dataForDefaultImageBulletWithContext:(id)arg1 ;
-(id)p_predefinedImageNames;
-(id)p_pathToPredefinedImages;
-(id)dataForImageBullet:(id)arg1 withContext:(id)arg2 ;
-(id)predefinedImages;
@end

