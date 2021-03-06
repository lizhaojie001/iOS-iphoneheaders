/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class AEAnnotationTheme, IMTheme;


@protocol AEAnnotationEditor <NSObject>
@property (assign,nonatomic,__weak) id<AEAnnotationEditorDelegate> delegate; 
@property (nonatomic,retain) id<AEAnnotation> annotation; 
@property (nonatomic,retain) AEAnnotationTheme * annotationTheme; 
@property (assign,nonatomic) char editsOnLaunch; 
@property (nonatomic,retain) IMTheme * theme; 
@optional
-(IMTheme *)theme;
-(void)setTheme:(id)arg1;

@required
-(char)editsOnLaunch;
-(AEAnnotationTheme *)annotationTheme;
-(void)setAnnotationTheme:(id)arg1;
-(void)setEditsOnLaunch:(char)arg1;
-(void)hide;
-(void)setDelegate:(id)arg1;
-(id<AEAnnotationEditorDelegate>)delegate;
-(id<AEAnnotation>)annotation;
-(void)setAnnotation:(id)arg1;

@end

