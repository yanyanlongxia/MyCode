# 导入相关模块与函数
import random
import pygame
import sys
from pygame.locals import *

# 初始化pygame
pygame.init()
# 表明四个全局变量
global Speed
global Trackingtime
global Displayobject
global WindowTypeface
Speed = 8
Trackingtime = pygame.time.Clock()  # 创建跟踪时间对象
Displayobject = pygame.display.set_mode((640, 480))  # 设置窗口高宽640*480
WindowTypeface = pygame.font.SysFont('Calibri.ttf', 25)  # 创建Typeface对象并设置字体和字号
pygame.display.set_caption('像素贪吃蛇')  # 设置窗口标题
backgroundcolor = (255, 255, 255)  # 设置窗口底色为纯白色


# 侦测键盘操作
def CheckKeyboardPress():
    if len(pygame.event.get(QUIT)) > 0:
        pygame.quit()
        sys.exit()
    keyUpEvents = pygame.event.get(KEYUP)
    if len(keyUpEvents) == 0:
        return None
    return keyUpEvents[0].key


# 游戏开始界面设计
def DesignStartScreen():
    global Speed
    titleTypeface1 = pygame.font.SysFont('Calibri.ttf', 200)
    titleTypeface2 = pygame.font.SysFont('Calibri.ttf', 60)
    titleContent1 = titleTypeface1.render('RETRO SNAKER', True, (0, 0, 0), (0, 0, 0))  # 设置主界面文字和大小
    titleContent2 = titleTypeface2.render('RETRO SNAKER', True, (255, 0, 0))
    KeyboardContent = WindowTypeface.render('Press any key to start', True, (0, 0, 0))
    Displayobject.fill(backgroundcolor)
    revolveContent1 = pygame.transform.rotate(titleContent1, 0)
    revolveRect1 = revolveContent1.get_rect()
    revolveRect1.center = (640 / 2, 480 / 2)
    Displayobject.blit(revolveContent1, revolveRect1)
    revolveContent2 = pygame.transform.rotate(titleContent2, 0)
    revolveRect2 = revolveContent2.get_rect()
    revolveRect2.center = (640 / 2, 480 / 2)
    Displayobject.blit(revolveContent2, revolveRect2)

    # 获得一个对象的rect，以便于设置其坐标位置
    KeyboardRect = KeyboardContent.get_rect()
    KeyboardRect.topleft = (640 - 200, 480 - 30)
    Displayobject.blit(KeyboardContent, KeyboardRect.topleft)
    pygame.display.update()
    Trackingtime.tick(Speed)
    while True:
        if CheckKeyboardPress():
            pygame.event.get()  # 清除事件队列
            return


# 游戏结束界面设计
def DesignGameOverScreen():
    gameOverTypeface = pygame.font.SysFont('Calibri.ttf', 100)
    gameoverContent = gameOverTypeface.render('Game Over', True, (0, 0, 0))
    KeyboardContent = WindowTypeface.render('Press any key to restart', True, (0, 0, 0))
    gameoverRect = gameoverContent.get_rect()
    gameoverRect.center = (640 / 2, 480 / 2)
    Displayobject.blit(gameoverContent, gameoverRect)

    # 获得一个对象的rect，以便于设置其坐标位置
    KeyboardRect = KeyboardContent.get_rect()
    KeyboardRect.topleft = (640 - 220, 480 - 30)
    Displayobject.blit(KeyboardContent, KeyboardRect.topleft)
    pygame.display.update()
    pygame.time.wait(600)
    while True:
        if CheckKeyboardPress():
            pygame.event.get()  # 清除事件队列
            return


# 贪吃蛇蛇身设计
def DesignRetroSnaker(RetroSnakerCoords):
    for coord in RetroSnakerCoords:
        x = coord['x'] * 20  # 规定每行单元格的大小为20
        y = coord['y'] * 20
        RetroSnakerSegmentRect = pygame.Rect(x, y, 20, 20)
        pygame.draw.rect(Displayobject, (0, 0, 255), RetroSnakerSegmentRect)
        RetroSnakerInnerSegmentRect = pygame.Rect(x + 4, y + 4, 20 - 8, 20 - 8)
        pygame.draw.rect(Displayobject, (173, 216, 230), RetroSnakerInnerSegmentRect)


# 苹果设计
def DesignApple(coord):
    x = coord['x'] * 20  # 规定单元格的大小为20
    y = coord['y'] * 20
    appleRect = pygame.Rect(x, y, 20, 20)
    pygame.draw.rect(Displayobject, (255, 0, 0), appleRect)


# 得分分数设计
def DesignScore(score):
    scoreContent = WindowTypeface.render('Score: %s' % (score), True, (0, 0, 0))
    scoreRect = scoreContent.get_rect()
    scoreRect.topleft = (640 - 100, 10)
    Displayobject.blit(scoreContent, scoreRect)


# 边框线设计
def DesignBorderline():
    for x in range(0, 640, 640 - 1):  # 绘制垂直线
        pygame.draw.line(Displayobject, (0, 0, 0), (x, 0), (x, 480), 5)
    for y in range(0, 480, 480 - 1):  # 绘制平行线
        pygame.draw.line(Displayobject, (0, 0, 0), (0, y), (640, y), 5)


# 设置游戏主要运行机制
def GameRunning():
    global Speed
    # 设置随机起点
    startx = random.randint(5, 26)  # 初始单元格位置横向在(5, 26)范围中选一个随机数
    starty = random.randint(5, 18)  # 初始单元格位置纵向在(5, 18)范围中选一个随机数
    RetroSnakerCoords = [{'x': startx, 'y': starty},
                         {'x': startx - 1, 'y': starty},
                         {'x': startx - 2, 'y': starty}]  # RetroSnakerCoords：列表，贪吃蛇坐标位置
    direction = 'right'  # 初始方向朝右
    # 设置苹果在一个随机位置
    apple = {'x': random.randint(0, 31), 'y': random.randint(0, 23)}

    while True:  # 游戏主循环
        # 判断键盘事件
        for event in pygame.event.get():  # 事件处理循环
            if event.type == KEYDOWN:
                if event.key == K_LEFT and direction != 'right':
                    direction = 'left'
                elif event.key == K_RIGHT and direction != 'left':
                    direction = 'right'
                elif event.key == K_UP and direction != 'down':
                    direction = 'up'
                elif event.key == K_DOWN and direction != 'up':
                    direction = 'down'

        # 根据方向改变蛇头的坐标
        if direction == 'up':
            m = {'x': RetroSnakerCoords[0]['x'], 'y': RetroSnakerCoords[0]['y'] - 1}
        elif direction == 'down':
            m = {'x': RetroSnakerCoords[0]['x'], 'y': RetroSnakerCoords[0]['y'] + 1}
        elif direction == 'left':
            m = {'x': RetroSnakerCoords[0]['x'] - 1, 'y': RetroSnakerCoords[0]['y']}
        elif direction == 'right':
            m = {'x': RetroSnakerCoords[0]['x'] + 1, 'y': RetroSnakerCoords[0]['y']}

        # 通过向贪吃蛇移动的方向添加一个单元格来加长贪吃蛇
        RetroSnakerCoords.insert(0, m)

        # 侦测贪吃蛇是否吃到苹果
        if RetroSnakerCoords[0]['x'] == apple['x'] and RetroSnakerCoords[0]['y'] == apple['y']:
            apple = {'x': random.randint(0, 31), 'y': random.randint(0, 23)}  # 在随机位置放置一个苹果
            Speed = Speed + 0.2
        else:
            del RetroSnakerCoords[-1]  # 去除贪吃蛇的尾段

        # 侦测贪吃蛇是否触碰到窗口边缘或自身
        if RetroSnakerCoords[0]['x'] == -1 or RetroSnakerCoords[0]['x'] == 32 or RetroSnakerCoords[0]['y'] == -1 or \
                RetroSnakerCoords[0]['y'] == 24:
            return  # 游戏结束
        for RetroSnakerBody in RetroSnakerCoords[1:]:
            if RetroSnakerCoords[0]['x'] == RetroSnakerBody['x'] and RetroSnakerCoords[0]['y'] == RetroSnakerBody['y']:
                return  # 游戏结束

        # 绘制相关角色在窗口中
        Displayobject.fill(backgroundcolor)
        DesignRetroSnaker(RetroSnakerCoords)
        DesignApple(apple)
        DesignScore(len(RetroSnakerCoords) - 3)
        DesignBorderline()
        pygame.display.update()  # 让绘制的东西显示在屏幕上
        Trackingtime.tick(Speed)


# 主函数
if __name__ == '__main__':
    DesignStartScreen()  # 初始化游戏开始界面
    while True:
        GameRunning()  # 游戏开始
        DesignGameOverScreen()  # 游戏结束