3
LZ๔Z   ใ               @   s"   d dl Z e j ZG dd dZdS )้    Nc               @   sV   e Zd Zdd Zdd Zdd Zdd Zd	d
 Zdd ZdddZ	dd Z
dd ZdS )ฺBoardc             C   s    || _ dd t| j D | _d S )Nc             S   s   g | ]}d qS )Nฉ )ฺ.0ฺ_r   r   ๚3C:\Users\Kaloyan\ELSYS\PROGRAMMING\Python\queens.py๚
<listcomp>	   s    z"Board.__init__.<locals>.<listcomp>)ฺsizeฺrangeฺcells)ฺselfr   r   r   r   ฺ__init__   s    zBoard.__init__c             C   s   dd | j D }t|S )Nc             S   s   g | ]}|d kqS )Nr   )r   ฺcr   r   r   r      s    z"Board.is_empty.<locals>.<listcomp>)r
   ฺall)r   Zchecksr   r   r   ฺis_empty   s    zBoard.is_emptyc             C   sJ   d|  ko| j k n  std|  ko2| j k n  s<t|| j|< d S )Nr   )r   ฺAssertionErrorr
   )r   ฺcolฺrowr   r   r   ฺ	set_queen   s    zBoard.set_queenc             C   s(   d|  ko| j k n  st| j| S )Nr   )r   r   r
   )r   r   r   r   r   r   ฺ	get_queen   s    zBoard.get_queenc             C   s,   d|  ko| j k n  std | j|< d S )Nr   )r   r   r
   )r   r   r   r   r   ฺunset_queen   s    zBoard.unset_queenc             C   sบ   d|  ko| j k n  std|  ko2| j k n  s<t| j| d krNdS x"| jD ]}|d k	rV||krVdS qVW xBt| j D ]4}| j| }|d krq~t|| t|| kr~dS q~W dS )Nr   TF)r   r   r
   r	   ฺabs)r   r   r   ฺrr   r   r   r   ฺunder_attack   s    
zBoard.under_attackr   c             C   sZ   || j krdS xFt| j D ]8}| j||s| j|| | j|d rHdS | j| qW dS )NT้   F)r   r	   r   r   ฺsolver   )r   r   r   r   r   r   r   /   s    
zBoard.solvec             C   s   d S )Nr   )r   r   r   r   ฺpretty_print:   s    zBoard.pretty_printc             C   sฮ   t j  |d d }t j  t j| |  t j  t jd | d }xxt|D ]l}x@t|D ]4}t jd x$tdD ]}t jd t jd qxW q`W t j  t j| | t j  |d7 }qRW t j  d S )N้2   ้   ้d   ้   ้Z   )ฺtZpendownZpenupZgotoZspeedr	   Zforwardฺleft)r   ฺxฺaฺzฺjฺir   r   r   ฺdraw=   s$    



z
Board.drawN)r   )ฺ__name__ฺ
__module__ฺ__qualname__r   r   r   r   r   r   r   r   r(   r   r   r   r   r      s   
r   )ZturtleZPenr!   r   r   r   r   r   ฺ<module>   s   