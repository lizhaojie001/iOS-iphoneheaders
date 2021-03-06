/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:04:26 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PLPhotoEffect : NSObject {

	NSString* _filterIdentifier;
	NSString* _displayName;
	NSString* _CIFilterName;

}

@property (nonatomic,copy,readonly) NSString * filterIdentifier;              //@synthesize filterIdentifier=_filterIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * CIFilterName;                  //@synthesize CIFilterName=_CIFilterName - In the implementation block
@property (nonatomic,readonly) int latestVersion; 
+(id)effectWithCIFilterName:(id)arg1 ;
+(id)effectWithIdentifier:(id)arg1 ;
+(id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3 ;
+(id)allEffects;
+(unsigned)indexOfEffectWithIdentifier:(id)arg1 ;
-(id)description;
-(NSString *)displayName;
-(int)latestVersion;
-(NSString *)filterIdentifier;
-(id)newEffectFilter;
-(NSString *)CIFilterName;
@end

