/*
 Nestopia for iOS
 Copyright (c) 2013, Jonathan A. Zdziarski
 
 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; version 2
 of the License.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 
 */

#import <UIKit/UIKit.h>
#import "GamesViewController.h"
#import "MultiValueViewController.h"
#import "Game.h"

@interface SettingsViewController : UITableViewController <UITextFieldDelegate,MultiValueViewControllerDelegate> {
	UIBarButtonItem *leftButton;
    NSArray *controllerLayoutDescriptions;
    
	UISwitch *swapABControl;
	UISwitch *integralScaleControl;
	UISwitch *aspectRatioControl;
	UISwitch *gameGenieControl;
    UISwitch *antiAliasControl;
    UISwitch *controllerStickControl;
		
	UITextField *gameGenieCodeControl[4];
    UITextField *controllerLayout;
    int controllerLayoutIndex;
	bool raised;
}

@property (nonatomic, strong) Game *game;

@end
