/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:55:44 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKMapViewDelegate.h>

@class UIImage, NSString, NSLock, NSMutableArray, MKMapSnapshotRequest;

@interface MKMapSnapshotCreator : NSObject <MKMapViewDelegate> {

	UIImage* _lastSnapshot;
	NSString* _lastAttributionString;
	NSLock* _requestLock;
	NSMutableArray* _requests;
	MKMapSnapshotRequest* _servingRequest;

}

@property (nonatomic,retain) MKMapSnapshotRequest * servingRequest;              //@synthesize servingRequest=_servingRequest - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsHighResolutionSnapshots;
+(char)supportsSharingThumbnails;
-(MKMapSnapshotRequest *)servingRequest;
-(void)setServingRequest:(MKMapSnapshotRequest *)arg1 ;
-(void)_respondWithSnapshot;
-(void)_processRequest;
-(id)_newSnapshotWithView:(id)arg1 ;
-(void)createSnapShotWithCoordinate:(SCD_Struct_MK1)arg1 zoomLevel:(unsigned)arg2 size:(CGSize)arg3 requester:(id)arg4 context:(id)arg5 ;
-(id)recreateCurrentSnapshotWithRequester:(id)arg1 context:(id)arg2 ;
-(void)flushRequestQueue;
-(void)createSnapShotWithCoordinate:(SCD_Struct_MK1)arg1 zoomLevel:(unsigned)arg2 size:(CGSize)arg3 handler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)init;
@end

