import pygame

pygame.mixer.init()
name=input()
pygame.mixer.music.load('F:\\music\\'+name)
pygame.mixer.music.set_volume(1)
pygame.mixer.music.play()
