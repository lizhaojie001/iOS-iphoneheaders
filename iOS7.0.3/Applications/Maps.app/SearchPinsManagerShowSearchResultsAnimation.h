/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class SearchInfo, MKWorldView;

@interface SearchPinsManagerShowSearchResultsAnimation : NSObject {

	SearchInfo* _results;
	MKWorldView* _worldView;
	BOOL _started;
	BOOL _canProceedToDropPins;
	BOOL _viewportAllowsDroppingPins;
	BOOL _hasDroppedPins;
	BOOL _cancelled;
	/*^block*/ id _completion;

}
-(id)initWithSearchInfo:(id)arg1 worldView:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)proceedWithDroppingPins:(BOOL)arg1 ;
-(void)_proceedWithDroppingPins;
-(void)dealloc;
-(void)cancel;
-(void)start;
@end

