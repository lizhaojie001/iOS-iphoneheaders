/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UINavigationController.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <MobileCal/EKEventViewDelegatePrivate.h>
#import <MobileCal/EKEventEditViewDelegate.h>
#import <MobileCal/CalendarDebugReportProblemViewControllerDelegate.h>
#import <MobileCal/NSUserActivityDelegate.h>
#import <UIKit/UIWindowDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <MobileCal/WeekViewControllerDelegate.h>

@class UIBarButtonItem, CompactMonthDividedListSwitchButton, ListViewSwitchButton, EventDetailContainerViewController, _UINavigationControllerPalette, NSAttributedString, UILabel, UIFont, NSMutableDictionary, NSUserActivity, CalendarModel, PaletteView, UINavigationController, NSString;

@interface RootNavigationController : UINavigationController <UIPopoverControllerDelegate, UIPopoverPresentationControllerDelegate, UIAdaptivePresentationControllerDelegate, UIPopoverPresentationControllerDelegate, EKEventViewDelegatePrivate, EKEventEditViewDelegate, CalendarDebugReportProblemViewControllerDelegate, NSUserActivityDelegate, UIWindowDelegate, UINavigationControllerDelegate, WeekViewControllerDelegate> {

	UIBarButtonItem* _modeToggleBarButtonItem;
	UIBarButtonItem* _addEventBarButtonItem;
	UIBarButtonItem* _searchBarButtonItem;
	CompactMonthDividedListSwitchButton* _phoneMonthDividedListSwitchButton;
	ListViewSwitchButton* _listViewSwitchButton;
	EventDetailContainerViewController* _activeEventDetailContainer;
	_UINavigationControllerPalette* _palette;
	NSAttributedString* _currentDateLabelString;
	UILabel* _currentDateLabel;
	UIBarButtonItem* _leftFixedSpaceBarItem;
	UIBarButtonItem* _labelBarItem;
	UIFont* _navBarStringYearFontPortrait;
	UIFont* _navBarStringYearFontLandscape;
	UIFont* _navBarStringYearFontRegularWidthCompactHeight;
	UIFont* _navBarStringMonthFontPortrait;
	UIFont* _navBarStringMonthFontLandscape;
	UIFont* _navBarStringMonthFontRegularWidthCompactHeight;
	NSMutableDictionary* _navBarDateStringCache;
	NSUserActivity* _userActivityForDateInView;
	NSUserActivity* _userActivityForEvent;
	char _isTransitioningTraitCollection;
	char _hideNavBarAfterTraitCollectionTransition;
	char _shouldSetNavBarVisibilityAfterTraitCollectionTransition;
	char _showingOverriddenToolbarItems;
	CalendarModel* _model;
	UIBarButtonItem* _todayBarButtonItem;
	UIBarButtonItem* _inboxBarButtonItem;
	UIBarButtonItem* _calendarsBarButtonItem;
	UIBarButtonItem* _leftPaddingItem;
	UIBarButtonItem* _rightPaddingItem;
	PaletteView* _paletteView;
	UINavigationController* _reportProblemNavigationController;
	unsigned _numberOfNotifications;

}

@property (nonatomic,retain) CalendarModel * model;                                                   //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * searchBarButtonItem; 
@property (nonatomic,readonly) UIBarButtonItem * addEventBarButtonItem; 
@property (nonatomic,retain) UIBarButtonItem * todayBarButtonItem;                                    //@synthesize todayBarButtonItem=_todayBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * inboxBarButtonItem;                                    //@synthesize inboxBarButtonItem=_inboxBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * calendarsBarButtonItem;                                //@synthesize calendarsBarButtonItem=_calendarsBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * leftPaddingItem;                                       //@synthesize leftPaddingItem=_leftPaddingItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * rightPaddingItem;                                      //@synthesize rightPaddingItem=_rightPaddingItem - In the implementation block
@property (nonatomic,retain) PaletteView * paletteView;                                               //@synthesize paletteView=_paletteView - In the implementation block
@property (nonatomic,readonly) int activeWidthSizeClass; 
@property (nonatomic,retain) UINavigationController * reportProblemNavigationController;              //@synthesize reportProblemNavigationController=_reportProblemNavigationController - In the implementation block
@property (assign,nonatomic) char showingOverriddenToolbarItems;                                      //@synthesize showingOverriddenToolbarItems=_showingOverriddenToolbarItems - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * modeToggleBarButtonItem; 
@property (assign,nonatomic) unsigned numberOfNotifications;                                          //@synthesize numberOfNotifications=_numberOfNotifications - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_inboxTitleForNotificationCount:(unsigned)arg1 ;
+(void)recursiveAnimationRemove:(id)arg1 ;
+(char)_diagnosticsAvailable;
+(char)_shouldForwardViewWillTransitionToSize;
-(id)resetToMonthView;
-(void)showDate:(id)arg1 animated:(char)arg2 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 ;
-(void)updateBackButtonToDate:(id)arg1 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 ;
-(id)bestDateForNewEvent;
-(void)_selectedDateChanged:(id)arg1 ;
-(id)resetToDayView;
-(id)resetToYearView;
-(void)showCalendarsAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(id)topMainViewController;
-(/*^block*/id)_doneBlock;
-(id)showInboxAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(PaletteView *)paletteView;
-(void)setNavBarStringFromDate:(id)arg1 includeMonth:(char)arg2 ;
-(id)pushCalendarViewControllerWithViewType:(int)arg1 andDate:(id)arg2 ;
-(void)weekViewController:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)weekViewController:(id)arg1 didEditEvent:(id)arg2 ;
-(void)_calendarsChanged:(id)arg1 ;
-(void)_selectedOccurrenceChanged:(id)arg1 ;
-(void)_restoreLastUsedCalendarViewType;
-(int)activeWidthSizeClass;
-(void)_updateAddEventButtonEnabledness;
-(void)_userActivityChanged;
-(int)currentViewType;
-(void)_saveUserActivityInfo:(id)arg1 ;
-(void)_addButtonsToNavigationBar;
-(void)_configureListViewToggleButton;
-(void)_configureDividedListViewToggleButton;
-(void)_configureNoToggleButton;
-(UIBarButtonItem *)todayBarButtonItem;
-(void)todayPressed;
-(void)setTodayBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)calendarsBarButtonItem;
-(void)calendarsPressed;
-(void)setCalendarsBarButtonItem:(UIBarButtonItem *)arg1 ;
-(unsigned)numberOfNotifications;
-(UIBarButtonItem *)inboxBarButtonItem;
-(void)inboxPressed;
-(void)setInboxBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setLeftPaddingItem:(UIBarButtonItem *)arg1 ;
-(void)setRightPaddingItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)leftPaddingItem;
-(UIBarButtonItem *)rightPaddingItem;
-(void)_centerCalendarsButton;
-(void)setShowingOverriddenToolbarItems:(char)arg1 ;
-(UIBarButtonItem *)addEventBarButtonItem;
-(void)_searchPressed;
-(void)addEventPressed;
-(UIBarButtonItem *)searchBarButtonItem;
-(UIBarButtonItem *)modeToggleBarButtonItem;
-(id)_listViewSwitchButton;
-(void)listTogglePressed;
-(void)_dividedListViewTogglePressed;
-(void)_configureModeToggleButtonWithButton:(id)arg1 ;
-(id)_compactMonthDividedListSwitchButton;
-(id)showSearchAnimated:(char)arg1 ;
-(void)showAddEventAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_replaceDayAndListViewContainersAccordingToSavedPreference;
-(void)doCrossfadeAnimationWithNavigationViewContents;
-(void)selectTodayWithTrigger:(int)arg1 animated:(char)arg2 ;
-(char)dismissPresentedViewController;
-(id)_popToViewControllerSatisfying:(/*^block*/id)arg1 ;
-(void)presentAdaptiveModalPageSheetViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentAdaptiveModalPopoverViewController:(id)arg1 relativeToBarButtonItem:(id)arg2 permittedArrowDirections:(unsigned)arg3 contentSize:(CGSize)arg4 animated:(char)arg5 completion:(/*^block*/id)arg6 ;
-(void)presentAdaptiveModalViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentAdaptiveModalViewController:(id)arg1 withPresentationStyleOverride:(int)arg2 relativeToBarButtonItem:(id)arg3 withSourceView:(id)arg4 sourceRect:(CGRect)arg5 permittedArrowDirections:(unsigned)arg6 contentSize:(CGSize)arg7 passThroughViews:(id)arg8 animated:(char)arg9 completion:(/*^block*/id)arg10 ;
-(Class)classForStackBaseContainerForCurrentTraits;
-(id)_ensureStackBaseCalendarViewControllerContainerIsPresent;
-(Class)_classRepresentingViewType:(int)arg1 ;
-(void)updateNavigationBarButtonItemsWithViewController:(id)arg1 ;
-(void)addToolbarButtonItemsWithViewController:(id)arg1 ;
-(void)_configureViewSwitcherShowingViewController:(id)arg1 ;
-(void)_setCurrentDateLabelString:(id)arg1 ;
-(void)_updatePaletteStateWithViewController:(id)arg1 ;
-(void)_selectTodayForMainViewControllerContainer:(id)arg1 animated:(char)arg2 ;
-(void)_showNowForMainViewControllerContainer:(id)arg1 animated:(char)arg2 ;
-(id)_now;
-(void)doCrossfadeAnimationWithCurrentScreenContents;
-(void)_updateViewSwitcherSegmentWidthsAfterWindowSizeChange;
-(void)_updateNavbarStringForNewStateAfterWindowSizeChange;
-(void)recursiveAnimationRemoveForSmallLayers:(id)arg1 ;
-(void)_storeActiveEventDetailContainer;
-(void)_removeActiveEventDetailContainerFromViewControllerHeirarchy;
-(void)_presentEventDetailsAfterSizeChange;
-(void)_setViewSwitcher:(id)arg1 segmentWidthsForOrientation:(int)arg2 ;
-(void)_updateDateLabelFrameForOrientation:(int)arg1 ;
-(id)_higherScopeCompactCalendarViewController;
-(float)_dateLabelMaxWidth;
-(id)_navBarDateStringFromDate:(id)arg1 includingMonth:(char)arg2 format:(int)arg3 ;
-(id)_navBarStringYearFontForInterfaceOrientation:(int)arg1 makingRoomForMonth:(char)arg2 ;
-(id)_navBarStringMonthFontForInterfaceOrientation:(int)arg1 ;
-(int)_viewTypeRepresentedByViewSwitcherIndex:(unsigned)arg1 ;
-(id)_viewSwitcherSegmentedControl;
-(unsigned)_viewSwitcherIndexRepresentingViewType:(int)arg1 ;
-(void)_viewSwitcherSelectedValueChanged:(id)arg1 ;
-(void)setNumberOfNotifications:(unsigned)arg1 ;
-(char)showingOverriddenToolbarItems;
-(id)showInboxAnimated:(char)arg1 ;
-(void)_showDebugReportProblemViewController;
-(UINavigationController *)reportProblemNavigationController;
-(void)setReportProblemNavigationController:(UINavigationController *)arg1 ;
-(void)_cancelPressedWhileInReportProblemView;
-(void)_dismissReportProblemController;
-(void)reportProblemViewControllerDidFinish:(id)arg1 ;
-(void)presentAdaptiveModalViewController:(id)arg1 ;
-(void)presentAdaptiveModalPopoverViewController:(id)arg1 relativeToSourceRect:(CGRect)arg2 withSourceView:(id)arg3 passThroughViews:(id)arg4 permittedArrowDirections:(unsigned)arg5 contentSize:(CGSize)arg6 animated:(char)arg7 completion:(/*^block*/id)arg8 ;
-(void)_windowSwipeSimulationDebugButtonPressed;
-(void)setPaletteView:(PaletteView *)arg1 ;
-(void)_notificationCountChanged:(id)arg1 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(char)eventViewControllerShouldHideInlineEditButton;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)userActivityWillSave:(id)arg1 ;
-(id)traitCollection;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(int)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)presentModalViewController:(id)arg1 withTransition:(int)arg2 ;
-(id)traitCollectionForChildViewController:(id)arg1 ;
-(CalendarModel *)model;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
-(id)navigationController:(id)arg1 animatorForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(char)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1 ;
-(void)setNavigationBarHidden:(char)arg1 animated:(char)arg2 ;
-(char)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(CalendarModel *)arg1 ;
-(void)didBecomeActive;
-(void)handleURL:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
@end

