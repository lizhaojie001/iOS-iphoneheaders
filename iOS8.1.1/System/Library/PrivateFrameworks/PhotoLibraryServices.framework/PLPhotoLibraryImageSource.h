/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:16 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLImageSource.h>

@interface PLPhotoLibraryImageSource : PLImageSource {

	int _imageFormat;

}

@property (nonatomic,readonly) int imageFormat; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)imageFormat;
-(id)newImageForAsset:(id)arg1 createMetadata:(id*)arg2 ;
-(unsigned short)sourceIdentifier;
-(id)initWithImageFormat:(int)arg1 ;
@end

