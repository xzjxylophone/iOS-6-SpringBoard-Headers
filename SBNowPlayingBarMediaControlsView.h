/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton, SBAppSwitcherLabel;

__attribute__((visibility("hidden")))
@interface SBNowPlayingBarMediaControlsView : XXUnknownSuperclass {
	UIButton* _prevButton;
	UIButton* _playButton;
	UIButton* _nextButton;
	UIButton* _airPlayButton;
	UIButton* _fifteenSecondRewindButton;
	UIButton* _fifteenSecondFFButton;
	SBAppSwitcherLabel* _trackLabel;
	int _toggleType;
	SBAppSwitcherLabel* _toggleLabel;
	BOOL _isAirPlayVisible;
	BOOL _isPlaying;
	int _currentTrackSupportsSkip;
	BOOL _isEnabled;
	BOOL _showingToggleLabel;
}
@property(assign, nonatomic) BOOL marqueeRunning;
@property(assign, nonatomic) BOOL airPlayButtonVisible;
@property(readonly, assign, nonatomic) UIButton* airPlayButton;
@property(readonly, assign, nonatomic) UIButton* fifteenSecondFFButton;
@property(readonly, assign, nonatomic) UIButton* fifteenSecondRewindButton;
@property(readonly, assign, nonatomic) UIButton* nextButton;
@property(readonly, assign, nonatomic) UIButton* playButton;
@property(readonly, assign, nonatomic) UIButton* prevButton;
-(void)_muteChanged:(id)changed;
-(void)_orientationLockChanged:(id)changed;
-(id)_toggleLabelText;
-(void)_setToggleType:(int)type;
-(void)_toggleStatus:(id)status;
-(void)setLabelWidth:(float)width;
-(void)setTrackString:(id)string;
-(void)_layoutForiPad;
-(void)_layoutForiPhone;
-(void)layoutSubviews;
-(void)updateImages:(BOOL)images enabled:(BOOL)enabled currentTrackSupportsSkip:(BOOL)skip;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
