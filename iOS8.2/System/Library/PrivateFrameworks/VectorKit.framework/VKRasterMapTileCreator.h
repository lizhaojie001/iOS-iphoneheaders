/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:42 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKMapModelDelegate.h>

@class VKImageCanvas, VKMapModel, VKRasterMapTileRequest, NSString;

@interface VKRasterMapTileCreator : NSObject <VKMapModelDelegate> {

	VKImageCanvas* _canvas;
	VKMapModel* _mapModel;
	VKTileKey _superTileKey;
	double _startTimestamp;
	char _loaderOpen;
	/*^block*/id _completion;
	VKRasterMapTileRequest* _request;
	GLRenderer* _gglRenderer;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(shared_ptr<ggl::GLDevice>*)device;
-(void)dealloc;
-(id)detailedDescription;
-(char)mapModelInNav:(id)arg1 ;
-(void)mapModel:(id)arg1 needsPanByOffset:(CGPoint)arg2 relativeToScreenPoint:(CGPoint)arg3 animated:(char)arg4 duration:(double)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)mapModel:(id)arg1 painterForOverlay:(id)arg2 ;
-(void)mapModelDidBecomePartiallyDrawn:(id)arg1 ;
-(void)mapModelWillBecomFullyDrawn:(id)arg1 ;
-(void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(char)arg2 ;
-(void)mapModelDidStartLoadingTiles:(id)arg1 ;
-(void)mapModelDidFinishLoadingTiles:(id)arg1 ;
-(void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2 ;
-(char)mapModelInNavAtDefaultZoom:(id)arg1 ;
-(double)mapModelZoomScale:(id)arg1 ;
-(void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2 ;
-(void)mapModel:(id)arg1 willTransitionFrom:(int)arg2 to:(int)arg3 duration:(double)arg4 ;
-(void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1 ;
-(void)renderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithSoftwareRendering:(char)arg1 homeQueue:(id)arg2 ;
-(id)mapModel:(id)arg1 markerForAnnotation:(id)arg2 ;
-(void)mapModel:(id)arg1 annotationMarker:(id)arg2 didChangeDragState:(int)arg3 fromOldState:(int)arg4 ;
-(void)_lookAtKey:(const VKTileKey*)arg1 ;
@end
