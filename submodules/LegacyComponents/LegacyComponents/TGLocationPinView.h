#import <UIKit/UIKit.h>

@interface TGLocationPinView : UIView

@property (nonatomic, assign, getter=isPinRaised) bool pinRaised;
- (void)setPinRaised:(bool)raised animated:(bool)animated completion:(void (^)(void))completion;

@end
