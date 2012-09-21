/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBAwayListCellButtonHandler.h"

@class UIImage, NSString, SBAlertItem, NSArray;

__attribute__((visibility("hidden")))
@interface SBAwaySystemAlertItem : XXUnknownSuperclass <SBAwayListCellButtonHandler> {
	SBAlertItem* _currentAlert;
	NSString* _title;
	NSArray* _buttonLabels;
	UIImage* _appImage;
	NSString* _message;
	int _cancelButtonIdx;
	BOOL _isAlarm;
}
-(BOOL)isAlarm;
-(int)cancelButtonIndex;
-(void)buttonPressedAtIndex:(int)index;
-(id)buttonLabels;
-(id)sortDate;
-(id)iconImage;
-(id)title;
-(id)message;
-(void)setCurrentAlert:(id)alert;
-(id)currentAlert;
-(void)dealloc;
-(id)initWithSystemAlert:(id)systemAlert;
@end
